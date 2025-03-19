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
   * <p>Metadata related to the configuration properties used during update of a
   * network instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/UpdateNsMetadata">AWS
   * API Reference</a></p>
   */
  class UpdateNsMetadata
  {
  public:
    AWS_TNB_API UpdateNsMetadata() = default;
    AWS_TNB_API UpdateNsMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API UpdateNsMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configurable properties used during update.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalParamsForNs() const { return m_additionalParamsForNs; }
    inline bool AdditionalParamsForNsHasBeenSet() const { return m_additionalParamsForNsHasBeenSet; }
    template<typename AdditionalParamsForNsT = Aws::Utils::Document>
    void SetAdditionalParamsForNs(AdditionalParamsForNsT&& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = std::forward<AdditionalParamsForNsT>(value); }
    template<typename AdditionalParamsForNsT = Aws::Utils::Document>
    UpdateNsMetadata& WithAdditionalParamsForNs(AdditionalParamsForNsT&& value) { SetAdditionalParamsForNs(std::forward<AdditionalParamsForNsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network service descriptor used for updating the network instance.</p>
     */
    inline const Aws::String& GetNsdInfoId() const { return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    template<typename NsdInfoIdT = Aws::String>
    void SetNsdInfoId(NsdInfoIdT&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::forward<NsdInfoIdT>(value); }
    template<typename NsdInfoIdT = Aws::String>
    UpdateNsMetadata& WithNsdInfoId(NsdInfoIdT&& value) { SetNsdInfoId(std::forward<NsdInfoIdT>(value)); return *this;}
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
