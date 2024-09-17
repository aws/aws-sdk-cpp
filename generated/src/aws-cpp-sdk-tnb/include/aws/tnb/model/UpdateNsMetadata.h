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
    AWS_TNB_API UpdateNsMetadata();
    AWS_TNB_API UpdateNsMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API UpdateNsMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configurable properties used during update.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalParamsForNs() const{ return m_additionalParamsForNs; }
    inline bool AdditionalParamsForNsHasBeenSet() const { return m_additionalParamsForNsHasBeenSet; }
    inline void SetAdditionalParamsForNs(const Aws::Utils::Document& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = value; }
    inline void SetAdditionalParamsForNs(Aws::Utils::Document&& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = std::move(value); }
    inline UpdateNsMetadata& WithAdditionalParamsForNs(const Aws::Utils::Document& value) { SetAdditionalParamsForNs(value); return *this;}
    inline UpdateNsMetadata& WithAdditionalParamsForNs(Aws::Utils::Document&& value) { SetAdditionalParamsForNs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network service descriptor used for updating the network instance.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }
    inline UpdateNsMetadata& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}
    inline UpdateNsMetadata& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}
    inline UpdateNsMetadata& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}
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
