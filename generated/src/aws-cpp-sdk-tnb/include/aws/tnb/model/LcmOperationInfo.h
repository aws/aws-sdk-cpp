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
    AWS_TNB_API LcmOperationInfo();
    AWS_TNB_API LcmOperationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API LcmOperationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the network operation.</p>
     */
    inline const Aws::String& GetNsLcmOpOccId() const{ return m_nsLcmOpOccId; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline bool NsLcmOpOccIdHasBeenSet() const { return m_nsLcmOpOccIdHasBeenSet; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(const Aws::String& value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId = value; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(Aws::String&& value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId = std::move(value); }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(const char* value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId.assign(value); }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline LcmOperationInfo& WithNsLcmOpOccId(const Aws::String& value) { SetNsLcmOpOccId(value); return *this;}

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline LcmOperationInfo& WithNsLcmOpOccId(Aws::String&& value) { SetNsLcmOpOccId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline LcmOperationInfo& WithNsLcmOpOccId(const char* value) { SetNsLcmOpOccId(value); return *this;}

  private:

    Aws::String m_nsLcmOpOccId;
    bool m_nsLcmOpOccIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
