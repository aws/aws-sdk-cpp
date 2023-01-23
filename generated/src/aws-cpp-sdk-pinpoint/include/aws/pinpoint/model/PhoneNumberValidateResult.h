/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/NumberValidateResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class PhoneNumberValidateResult
  {
  public:
    AWS_PINPOINT_API PhoneNumberValidateResult();
    AWS_PINPOINT_API PhoneNumberValidateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API PhoneNumberValidateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const NumberValidateResponse& GetNumberValidateResponse() const{ return m_numberValidateResponse; }

    
    inline void SetNumberValidateResponse(const NumberValidateResponse& value) { m_numberValidateResponse = value; }

    
    inline void SetNumberValidateResponse(NumberValidateResponse&& value) { m_numberValidateResponse = std::move(value); }

    
    inline PhoneNumberValidateResult& WithNumberValidateResponse(const NumberValidateResponse& value) { SetNumberValidateResponse(value); return *this;}

    
    inline PhoneNumberValidateResult& WithNumberValidateResponse(NumberValidateResponse&& value) { SetNumberValidateResponse(std::move(value)); return *this;}

  private:

    NumberValidateResponse m_numberValidateResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
