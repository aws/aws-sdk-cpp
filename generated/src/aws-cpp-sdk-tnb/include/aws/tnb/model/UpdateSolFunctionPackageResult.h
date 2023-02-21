/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/OperationalState.h>
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
namespace tnb
{
namespace Model
{
  class UpdateSolFunctionPackageResult
  {
  public:
    AWS_TNB_API UpdateSolFunctionPackageResult();
    AWS_TNB_API UpdateSolFunctionPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API UpdateSolFunctionPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Operational state of the function package.</p>
     */
    inline const OperationalState& GetOperationalState() const{ return m_operationalState; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(const OperationalState& value) { m_operationalState = value; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(OperationalState&& value) { m_operationalState = std::move(value); }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline UpdateSolFunctionPackageResult& WithOperationalState(const OperationalState& value) { SetOperationalState(value); return *this;}

    /**
     * <p>Operational state of the function package.</p>
     */
    inline UpdateSolFunctionPackageResult& WithOperationalState(OperationalState&& value) { SetOperationalState(std::move(value)); return *this;}

  private:

    OperationalState m_operationalState;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
