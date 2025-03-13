/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Lifecycle management operation details on the network instance.</p>
   * <p>Lifecycle management operations are deploy, update, or delete
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/LcmOperationInfo">AWS
   * API Reference</a></p>
   */
  class LcmOperationInfo
  {
  public:
    AWS_TNB_API LcmOperationInfo() = default;
    AWS_TNB_API LcmOperationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API LcmOperationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the network operation.</p>
     */
    inline const Aws::String& GetNsLcmOpOccId() const { return m_nsLcmOpOccId; }
    inline bool NsLcmOpOccIdHasBeenSet() const { return m_nsLcmOpOccIdHasBeenSet; }
    template<typename NsLcmOpOccIdT = Aws::String>
    void SetNsLcmOpOccId(NsLcmOpOccIdT&& value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId = std::forward<NsLcmOpOccIdT>(value); }
    template<typename NsLcmOpOccIdT = Aws::String>
    LcmOperationInfo& WithNsLcmOpOccId(NsLcmOpOccIdT&& value) { SetNsLcmOpOccId(std::forward<NsLcmOpOccIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nsLcmOpOccId;
    bool m_nsLcmOpOccIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
