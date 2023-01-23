/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DedicatedIpPool.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following element is returned by the service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpPoolResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpPoolResult
  {
  public:
    AWS_SESV2_API GetDedicatedIpPoolResult();
    AWS_SESV2_API GetDedicatedIpPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDedicatedIpPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about a dedicated IP pool.</p>
     */
    inline const DedicatedIpPool& GetDedicatedIpPool() const{ return m_dedicatedIpPool; }

    /**
     * <p>An object that contains information about a dedicated IP pool.</p>
     */
    inline void SetDedicatedIpPool(const DedicatedIpPool& value) { m_dedicatedIpPool = value; }

    /**
     * <p>An object that contains information about a dedicated IP pool.</p>
     */
    inline void SetDedicatedIpPool(DedicatedIpPool&& value) { m_dedicatedIpPool = std::move(value); }

    /**
     * <p>An object that contains information about a dedicated IP pool.</p>
     */
    inline GetDedicatedIpPoolResult& WithDedicatedIpPool(const DedicatedIpPool& value) { SetDedicatedIpPool(value); return *this;}

    /**
     * <p>An object that contains information about a dedicated IP pool.</p>
     */
    inline GetDedicatedIpPoolResult& WithDedicatedIpPool(DedicatedIpPool&& value) { SetDedicatedIpPool(std::move(value)); return *this;}

  private:

    DedicatedIpPool m_dedicatedIpPool;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
