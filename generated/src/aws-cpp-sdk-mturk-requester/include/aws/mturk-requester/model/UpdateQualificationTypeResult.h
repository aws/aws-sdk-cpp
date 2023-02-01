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
  class UpdateQualificationTypeResult
  {
  public:
    AWS_MTURK_API UpdateQualificationTypeResult();
    AWS_MTURK_API UpdateQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API UpdateQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Contains a QualificationType data structure.</p>
     */
    inline const QualificationType& GetQualificationType() const{ return m_qualificationType; }

    /**
     * <p> Contains a QualificationType data structure.</p>
     */
    inline void SetQualificationType(const QualificationType& value) { m_qualificationType = value; }

    /**
     * <p> Contains a QualificationType data structure.</p>
     */
    inline void SetQualificationType(QualificationType&& value) { m_qualificationType = std::move(value); }

    /**
     * <p> Contains a QualificationType data structure.</p>
     */
    inline UpdateQualificationTypeResult& WithQualificationType(const QualificationType& value) { SetQualificationType(value); return *this;}

    /**
     * <p> Contains a QualificationType data structure.</p>
     */
    inline UpdateQualificationTypeResult& WithQualificationType(QualificationType&& value) { SetQualificationType(std::move(value)); return *this;}

  private:

    QualificationType m_qualificationType;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
