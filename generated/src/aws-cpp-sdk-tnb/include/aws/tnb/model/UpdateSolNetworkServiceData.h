/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
   * <p>Information parameters and/or the configurable properties for a network
   * descriptor used for update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/UpdateSolNetworkServiceData">AWS
   * API Reference</a></p>
   */
  class UpdateSolNetworkServiceData
  {
  public:
    AWS_TNB_API UpdateSolNetworkServiceData();
    AWS_TNB_API UpdateSolNetworkServiceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API UpdateSolNetworkServiceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Values for the configurable properties declared in the network service
     * descriptor.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalParamsForNs() const{ return m_additionalParamsForNs; }
    inline bool AdditionalParamsForNsHasBeenSet() const { return m_additionalParamsForNsHasBeenSet; }
    inline void SetAdditionalParamsForNs(const Aws::Utils::Document& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = value; }
    inline void SetAdditionalParamsForNs(Aws::Utils::Document&& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = std::move(value); }
    inline UpdateSolNetworkServiceData& WithAdditionalParamsForNs(const Aws::Utils::Document& value) { SetAdditionalParamsForNs(value); return *this;}
    inline UpdateSolNetworkServiceData& WithAdditionalParamsForNs(Aws::Utils::Document&& value) { SetAdditionalParamsForNs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network service descriptor.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }
    inline UpdateSolNetworkServiceData& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}
    inline UpdateSolNetworkServiceData& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}
    inline UpdateSolNetworkServiceData& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_additionalParamsForNs;
    bool m_additionalParamsForNsHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
