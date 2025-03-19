/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{
  class CreateWebACLMigrationStackResult
  {
  public:
    AWS_WAF_API CreateWebACLMigrationStackResult() = default;
    AWS_WAF_API CreateWebACLMigrationStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateWebACLMigrationStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline const Aws::String& GetS3ObjectUrl() const { return m_s3ObjectUrl; }
    template<typename S3ObjectUrlT = Aws::String>
    void SetS3ObjectUrl(S3ObjectUrlT&& value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl = std::forward<S3ObjectUrlT>(value); }
    template<typename S3ObjectUrlT = Aws::String>
    CreateWebACLMigrationStackResult& WithS3ObjectUrl(S3ObjectUrlT&& value) { SetS3ObjectUrl(std::forward<S3ObjectUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWebACLMigrationStackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3ObjectUrl;
    bool m_s3ObjectUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
