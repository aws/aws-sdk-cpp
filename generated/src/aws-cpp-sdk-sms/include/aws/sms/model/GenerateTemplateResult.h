/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/S3Location.h>
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
namespace SMS
{
namespace Model
{
  class GenerateTemplateResult
  {
  public:
    AWS_SMS_API GenerateTemplateResult();
    AWS_SMS_API GenerateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GenerateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location of the Amazon S3 object.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The location of the Amazon S3 object.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3Location = value; }

    /**
     * <p>The location of the Amazon S3 object.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3Location = std::move(value); }

    /**
     * <p>The location of the Amazon S3 object.</p>
     */
    inline GenerateTemplateResult& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The location of the Amazon S3 object.</p>
     */
    inline GenerateTemplateResult& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GenerateTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GenerateTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GenerateTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    S3Location m_s3Location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
