/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/VnfOperationalState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/tnb/model/GetSolVnfcResourceInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace tnb
{
namespace Model
{

  /**
   * <p>Information about the network function.</p> <p>A network function instance is
   * a function in a function package .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolVnfInfo">AWS
   * API Reference</a></p>
   */
  class GetSolVnfInfo
  {
  public:
    AWS_TNB_API GetSolVnfInfo();
    AWS_TNB_API GetSolVnfInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolVnfInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>State of the network function instance.</p>
     */
    inline const VnfOperationalState& GetVnfState() const{ return m_vnfState; }

    /**
     * <p>State of the network function instance.</p>
     */
    inline bool VnfStateHasBeenSet() const { return m_vnfStateHasBeenSet; }

    /**
     * <p>State of the network function instance.</p>
     */
    inline void SetVnfState(const VnfOperationalState& value) { m_vnfStateHasBeenSet = true; m_vnfState = value; }

    /**
     * <p>State of the network function instance.</p>
     */
    inline void SetVnfState(VnfOperationalState&& value) { m_vnfStateHasBeenSet = true; m_vnfState = std::move(value); }

    /**
     * <p>State of the network function instance.</p>
     */
    inline GetSolVnfInfo& WithVnfState(const VnfOperationalState& value) { SetVnfState(value); return *this;}

    /**
     * <p>State of the network function instance.</p>
     */
    inline GetSolVnfInfo& WithVnfState(VnfOperationalState&& value) { SetVnfState(std::move(value)); return *this;}


    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline const Aws::Vector<GetSolVnfcResourceInfo>& GetVnfcResourceInfo() const{ return m_vnfcResourceInfo; }

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline bool VnfcResourceInfoHasBeenSet() const { return m_vnfcResourceInfoHasBeenSet; }

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline void SetVnfcResourceInfo(const Aws::Vector<GetSolVnfcResourceInfo>& value) { m_vnfcResourceInfoHasBeenSet = true; m_vnfcResourceInfo = value; }

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline void SetVnfcResourceInfo(Aws::Vector<GetSolVnfcResourceInfo>&& value) { m_vnfcResourceInfoHasBeenSet = true; m_vnfcResourceInfo = std::move(value); }

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline GetSolVnfInfo& WithVnfcResourceInfo(const Aws::Vector<GetSolVnfcResourceInfo>& value) { SetVnfcResourceInfo(value); return *this;}

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline GetSolVnfInfo& WithVnfcResourceInfo(Aws::Vector<GetSolVnfcResourceInfo>&& value) { SetVnfcResourceInfo(std::move(value)); return *this;}

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline GetSolVnfInfo& AddVnfcResourceInfo(const GetSolVnfcResourceInfo& value) { m_vnfcResourceInfoHasBeenSet = true; m_vnfcResourceInfo.push_back(value); return *this; }

    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline GetSolVnfInfo& AddVnfcResourceInfo(GetSolVnfcResourceInfo&& value) { m_vnfcResourceInfoHasBeenSet = true; m_vnfcResourceInfo.push_back(std::move(value)); return *this; }

  private:

    VnfOperationalState m_vnfState;
    bool m_vnfStateHasBeenSet = false;

    Aws::Vector<GetSolVnfcResourceInfo> m_vnfcResourceInfo;
    bool m_vnfcResourceInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
