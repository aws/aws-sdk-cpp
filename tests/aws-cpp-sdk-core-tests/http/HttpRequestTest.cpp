/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

using namespace Aws::Http;
using namespace Aws::Http::Standard;

namespace {
// Resets the process-global path-separator flag when the test leaves, including on assertion failure.
class PreservePathSeparatorsGuard {
 public:
  explicit PreservePathSeparatorsGuard(bool preserve) { SetPreservePathSeparators(preserve); }

  ~PreservePathSeparatorsGuard() { SetPreservePathSeparators(false); }

  PreservePathSeparatorsGuard(const PreservePathSeparatorsGuard&) = delete;
  PreservePathSeparatorsGuard& operator=(const PreservePathSeparatorsGuard&) = delete;
};

Aws::String CrtRequestPath(const char* uri, HttpMethod method) {
  StandardHttpRequest request(URI(uri), method);
  auto crtRequest = request.ToCrtHttpRequest();
  if (!crtRequest) {
    ADD_FAILURE() << "ToCrtHttpRequest returned null for " << uri;
    return {};
  }

  auto path = crtRequest->GetPath();
  if (!path.has_value()) {
    ADD_FAILURE() << "CRT request has no path for " << uri;
    return {};
  }

  return Aws::String(reinterpret_cast<const char*>(path->ptr), path->len);
}
}  // namespace

class HttpRequestConversionTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(HttpRequestConversionTest, OriginFormNonDefaultPort) {
  EXPECT_EQ("/bucket/key?uploadId=abc&partNumber=1",
            CrtRequestPath("http://example.com:9000/bucket/key?uploadId=abc&partNumber=1", HttpMethod::HTTP_PUT));
}

TEST_F(HttpRequestConversionTest, OriginFormHttpsPath) {
  EXPECT_EQ("/my-bucket/my-key", CrtRequestPath("https://s3.amazonaws.com/my-bucket/my-key", HttpMethod::HTTP_GET));
}

TEST_F(HttpRequestConversionTest, OriginFormQueryString) {
  EXPECT_EQ("/path/to/file?query=value&foo=bar",
            CrtRequestPath("https://storage.example.com:443/path/to/file?query=value&foo=bar", HttpMethod::HTTP_POST));
}

TEST_F(HttpRequestConversionTest, OriginFormRootPath) { EXPECT_EQ("/", CrtRequestPath("http://localhost:8080/", HttpMethod::HTTP_HEAD)); }

// Old absolute-form code dropped a root path and emitted "https://host?list-type=2".
TEST_F(HttpRequestConversionTest, OriginFormRootPathWithQuery) {
  EXPECT_EQ("/?list-type=2", CrtRequestPath("https://host/?list-type=2", HttpMethod::HTTP_GET));
}

TEST_F(HttpRequestConversionTest, OriginFormTrailingSlash) {
  EXPECT_EQ("/bucket/prefix/", CrtRequestPath("https://host/bucket/prefix/", HttpMethod::HTTP_GET));
}

TEST_F(HttpRequestConversionTest, OriginFormEncodesReservedCharacters) {
  EXPECT_EQ("/bucket/a%3Ab%20c%2Bd", CrtRequestPath("https://host/bucket/a:b c+d", HttpMethod::HTTP_PUT));
}

TEST_F(HttpRequestConversionTest, OriginFormPreservesLeadingSlashInKey) {
  PreservePathSeparatorsGuard guard(true);
  (void)guard;
  EXPECT_EQ("//key", CrtRequestPath("https://host//key", HttpMethod::HTTP_GET));
}
