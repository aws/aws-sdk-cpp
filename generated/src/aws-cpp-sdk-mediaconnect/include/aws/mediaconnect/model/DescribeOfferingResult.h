/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Offering.h>
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
namespace MediaConnect
{
namespace Model
{
  class DescribeOfferingResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeOfferingResult();
    AWS_MEDIACONNECT_API DescribeOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Offering& GetOffering() const{ return m_offering; }

    
    inline void SetOffering(const Offering& value) { m_offering = value; }

    
    inline void SetOffering(Offering&& value) { m_offering = std::move(value); }

    
    inline DescribeOfferingResult& WithOffering(const Offering& value) { SetOffering(value); return *this;}

    
    inline DescribeOfferingResult& WithOffering(Offering&& value) { SetOffering(std::move(value)); return *this;}

  private:

    Offering m_offering;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
