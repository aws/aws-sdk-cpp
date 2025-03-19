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
    AWS_TNB_API GetSolVnfInfo() = default;
    AWS_TNB_API GetSolVnfInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolVnfInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>State of the network function instance.</p>
     */
    inline VnfOperationalState GetVnfState() const { return m_vnfState; }
    inline bool VnfStateHasBeenSet() const { return m_vnfStateHasBeenSet; }
    inline void SetVnfState(VnfOperationalState value) { m_vnfStateHasBeenSet = true; m_vnfState = value; }
    inline GetSolVnfInfo& WithVnfState(VnfOperationalState value) { SetVnfState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute info used by the network function instance.</p>
     */
    inline const Aws::Vector<GetSolVnfcResourceInfo>& GetVnfcResourceInfo() const { return m_vnfcResourceInfo; }
    inline bool VnfcResourceInfoHasBeenSet() const { return m_vnfcResourceInfoHasBeenSet; }
    template<typename VnfcResourceInfoT = Aws::Vector<GetSolVnfcResourceInfo>>
    void SetVnfcResourceInfo(VnfcResourceInfoT&& value) { m_vnfcResourceInfoHasBeenSet = true; m_vnfcResourceInfo = std::forward<VnfcResourceInfoT>(value); }
    template<typename VnfcResourceInfoT = Aws::Vector<GetSolVnfcResourceInfo>>
    GetSolVnfInfo& WithVnfcResourceInfo(VnfcResourceInfoT&& value) { SetVnfcResourceInfo(std::forward<VnfcResourceInfoT>(value)); return *this;}
    template<typename VnfcResourceInfoT = GetSolVnfcResourceInfo>
    GetSolVnfInfo& AddVnfcResourceInfo(VnfcResourceInfoT&& value) { m_vnfcResourceInfoHasBeenSet = true; m_vnfcResourceInfo.emplace_back(std::forward<VnfcResourceInfoT>(value)); return *this; }
    ///@}
  private:

    VnfOperationalState m_vnfState{VnfOperationalState::NOT_SET};
    bool m_vnfStateHasBeenSet = false;

    Aws::Vector<GetSolVnfcResourceInfo> m_vnfcResourceInfo;
    bool m_vnfcResourceInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
