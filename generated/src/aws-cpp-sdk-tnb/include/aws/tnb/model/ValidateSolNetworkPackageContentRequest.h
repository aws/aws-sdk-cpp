/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class ValidateSolNetworkPackageContentRequest : public StreamingTnbRequest
  {
  public:
    AWS_TNB_API ValidateSolNetworkPackageContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateSolNetworkPackageContent"; }


    /**
     * <p>Network service descriptor file.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }

    /**
     * <p>Network service descriptor file.</p>
     */
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }

    /**
     * <p>Network service descriptor file.</p>
     */
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }

    /**
     * <p>Network service descriptor file.</p>
     */
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }

    /**
     * <p>Network service descriptor file.</p>
     */
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }

    /**
     * <p>Network service descriptor file.</p>
     */
    inline ValidateSolNetworkPackageContentRequest& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}

    /**
     * <p>Network service descriptor file.</p>
     */
    inline ValidateSolNetworkPackageContentRequest& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor file.</p>
     */
    inline ValidateSolNetworkPackageContentRequest& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}

  private:


    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
