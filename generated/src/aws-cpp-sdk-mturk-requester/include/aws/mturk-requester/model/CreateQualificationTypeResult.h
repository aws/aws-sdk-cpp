/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/QualificationType.h>
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
  class CreateQualificationTypeResult
  {
  public:
    AWS_MTURK_API CreateQualificationTypeResult();
    AWS_MTURK_API CreateQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API CreateQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The created Qualification type, returned as a QualificationType data
     * structure.</p>
     */
    inline const QualificationType& GetQualificationType() const{ return m_qualificationType; }

    /**
     * <p>The created Qualification type, returned as a QualificationType data
     * structure.</p>
     */
    inline void SetQualificationType(const QualificationType& value) { m_qualificationType = value; }

    /**
     * <p>The created Qualification type, returned as a QualificationType data
     * structure.</p>
     */
    inline void SetQualificationType(QualificationType&& value) { m_qualificationType = std::move(value); }

    /**
     * <p>The created Qualification type, returned as a QualificationType data
     * structure.</p>
     */
    inline CreateQualificationTypeResult& WithQualificationType(const QualificationType& value) { SetQualificationType(value); return *this;}

    /**
     * <p>The created Qualification type, returned as a QualificationType data
     * structure.</p>
     */
    inline CreateQualificationTypeResult& WithQualificationType(QualificationType&& value) { SetQualificationType(std::move(value)); return *this;}

  private:

    QualificationType m_qualificationType;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
