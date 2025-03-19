/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/VnfOperationalState.h>
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
   * <p>Information about a network function.</p> <p>A network instance is a single
   * network created in Amazon Web Services TNB that can be deployed and on which
   * life-cycle operations (like terminate, update, and delete) can be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolInstantiatedVnfInfo">AWS
   * API Reference</a></p>
   */
  class GetSolInstantiatedVnfInfo
  {
  public:
    AWS_TNB_API GetSolInstantiatedVnfInfo() = default;
    AWS_TNB_API GetSolInstantiatedVnfInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolInstantiatedVnfInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>State of the network function.</p>
     */
    inline VnfOperationalState GetVnfState() const { return m_vnfState; }
    inline bool VnfStateHasBeenSet() const { return m_vnfStateHasBeenSet; }
    inline void SetVnfState(VnfOperationalState value) { m_vnfStateHasBeenSet = true; m_vnfState = value; }
    inline GetSolInstantiatedVnfInfo& WithVnfState(VnfOperationalState value) { SetVnfState(value); return *this;}
    ///@}
  private:

    VnfOperationalState m_vnfState{VnfOperationalState::NOT_SET};
    bool m_vnfStateHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
