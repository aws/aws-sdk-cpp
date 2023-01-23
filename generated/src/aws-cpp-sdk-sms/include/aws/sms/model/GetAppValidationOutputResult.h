/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ValidationOutput.h>
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
  class GetAppValidationOutputResult
  {
  public:
    AWS_SMS_API GetAppValidationOutputResult();
    AWS_SMS_API GetAppValidationOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppValidationOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The validation output.</p>
     */
    inline const Aws::Vector<ValidationOutput>& GetValidationOutputList() const{ return m_validationOutputList; }

    /**
     * <p>The validation output.</p>
     */
    inline void SetValidationOutputList(const Aws::Vector<ValidationOutput>& value) { m_validationOutputList = value; }

    /**
     * <p>The validation output.</p>
     */
    inline void SetValidationOutputList(Aws::Vector<ValidationOutput>&& value) { m_validationOutputList = std::move(value); }

    /**
     * <p>The validation output.</p>
     */
    inline GetAppValidationOutputResult& WithValidationOutputList(const Aws::Vector<ValidationOutput>& value) { SetValidationOutputList(value); return *this;}

    /**
     * <p>The validation output.</p>
     */
    inline GetAppValidationOutputResult& WithValidationOutputList(Aws::Vector<ValidationOutput>&& value) { SetValidationOutputList(std::move(value)); return *this;}

    /**
     * <p>The validation output.</p>
     */
    inline GetAppValidationOutputResult& AddValidationOutputList(const ValidationOutput& value) { m_validationOutputList.push_back(value); return *this; }

    /**
     * <p>The validation output.</p>
     */
    inline GetAppValidationOutputResult& AddValidationOutputList(ValidationOutput&& value) { m_validationOutputList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ValidationOutput> m_validationOutputList;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
