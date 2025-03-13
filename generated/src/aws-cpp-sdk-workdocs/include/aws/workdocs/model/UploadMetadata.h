/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the upload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UploadMetadata">AWS
   * API Reference</a></p>
   */
  class UploadMetadata
  {
  public:
    AWS_WORKDOCS_API UploadMetadata() = default;
    AWS_WORKDOCS_API UploadMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API UploadMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the upload.</p>
     */
    inline const Aws::String& GetUploadUrl() const { return m_uploadUrl; }
    inline bool UploadUrlHasBeenSet() const { return m_uploadUrlHasBeenSet; }
    template<typename UploadUrlT = Aws::String>
    void SetUploadUrl(UploadUrlT&& value) { m_uploadUrlHasBeenSet = true; m_uploadUrl = std::forward<UploadUrlT>(value); }
    template<typename UploadUrlT = Aws::String>
    UploadMetadata& WithUploadUrl(UploadUrlT&& value) { SetUploadUrl(std::forward<UploadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signed headers.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSignedHeaders() const { return m_signedHeaders; }
    inline bool SignedHeadersHasBeenSet() const { return m_signedHeadersHasBeenSet; }
    template<typename SignedHeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetSignedHeaders(SignedHeadersT&& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders = std::forward<SignedHeadersT>(value); }
    template<typename SignedHeadersT = Aws::Map<Aws::String, Aws::String>>
    UploadMetadata& WithSignedHeaders(SignedHeadersT&& value) { SetSignedHeaders(std::forward<SignedHeadersT>(value)); return *this;}
    template<typename SignedHeadersKeyT = Aws::String, typename SignedHeadersValueT = Aws::String>
    UploadMetadata& AddSignedHeaders(SignedHeadersKeyT&& key, SignedHeadersValueT&& value) {
      m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(std::forward<SignedHeadersKeyT>(key), std::forward<SignedHeadersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_uploadUrl;
    bool m_uploadUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signedHeaders;
    bool m_signedHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
