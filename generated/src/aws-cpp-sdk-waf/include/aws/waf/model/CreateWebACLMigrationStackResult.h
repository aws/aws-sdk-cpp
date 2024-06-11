﻿/**
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
    AWS_WAF_API CreateWebACLMigrationStackResult();
    AWS_WAF_API CreateWebACLMigrationStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateWebACLMigrationStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline const Aws::String& GetS3ObjectUrl() const{ return m_s3ObjectUrl; }
    inline void SetS3ObjectUrl(const Aws::String& value) { m_s3ObjectUrl = value; }
    inline void SetS3ObjectUrl(Aws::String&& value) { m_s3ObjectUrl = std::move(value); }
    inline void SetS3ObjectUrl(const char* value) { m_s3ObjectUrl.assign(value); }
    inline CreateWebACLMigrationStackResult& WithS3ObjectUrl(const Aws::String& value) { SetS3ObjectUrl(value); return *this;}
    inline CreateWebACLMigrationStackResult& WithS3ObjectUrl(Aws::String&& value) { SetS3ObjectUrl(std::move(value)); return *this;}
    inline CreateWebACLMigrationStackResult& WithS3ObjectUrl(const char* value) { SetS3ObjectUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWebACLMigrationStackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWebACLMigrationStackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWebACLMigrationStackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_s3ObjectUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
