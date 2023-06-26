/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/QualificationType.h>
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
namespace MTurk
{
namespace Model
{
  class GetQualificationTypeResult
  {
  public:
    AWS_MTURK_API GetQualificationTypeResult();
    AWS_MTURK_API GetQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned Qualification Type</p>
     */
    inline const QualificationType& GetQualificationType() const{ return m_qualificationType; }

    /**
     * <p> The returned Qualification Type</p>
     */
    inline void SetQualificationType(const QualificationType& value) { m_qualificationType = value; }

    /**
     * <p> The returned Qualification Type</p>
     */
    inline void SetQualificationType(QualificationType&& value) { m_qualificationType = std::move(value); }

    /**
     * <p> The returned Qualification Type</p>
     */
    inline GetQualificationTypeResult& WithQualificationType(const QualificationType& value) { SetQualificationType(value); return *this;}

    /**
     * <p> The returned Qualification Type</p>
     */
    inline GetQualificationTypeResult& WithQualificationType(QualificationType&& value) { SetQualificationType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQualificationTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQualificationTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQualificationTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    QualificationType m_qualificationType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
