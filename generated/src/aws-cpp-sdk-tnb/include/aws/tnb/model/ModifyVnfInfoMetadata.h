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
   * specific network function in a network instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ModifyVnfInfoMetadata">AWS
   * API Reference</a></p>
   */
  class ModifyVnfInfoMetadata
  {
  public:
    AWS_TNB_API ModifyVnfInfoMetadata();
    AWS_TNB_API ModifyVnfInfoMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ModifyVnfInfoMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configurable properties used during update of the network function
     * instance.</p>
     */
    inline Aws::Utils::DocumentView GetVnfConfigurableProperties() const{ return m_vnfConfigurableProperties; }
    inline bool VnfConfigurablePropertiesHasBeenSet() const { return m_vnfConfigurablePropertiesHasBeenSet; }
    inline void SetVnfConfigurableProperties(const Aws::Utils::Document& value) { m_vnfConfigurablePropertiesHasBeenSet = true; m_vnfConfigurableProperties = value; }
    inline void SetVnfConfigurableProperties(Aws::Utils::Document&& value) { m_vnfConfigurablePropertiesHasBeenSet = true; m_vnfConfigurableProperties = std::move(value); }
    inline ModifyVnfInfoMetadata& WithVnfConfigurableProperties(const Aws::Utils::Document& value) { SetVnfConfigurableProperties(value); return *this;}
    inline ModifyVnfInfoMetadata& WithVnfConfigurableProperties(Aws::Utils::Document&& value) { SetVnfConfigurableProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function instance that was updated in the network instance.</p>
     */
    inline const Aws::String& GetVnfInstanceId() const{ return m_vnfInstanceId; }
    inline bool VnfInstanceIdHasBeenSet() const { return m_vnfInstanceIdHasBeenSet; }
    inline void SetVnfInstanceId(const Aws::String& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = value; }
    inline void SetVnfInstanceId(Aws::String&& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = std::move(value); }
    inline void SetVnfInstanceId(const char* value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId.assign(value); }
    inline ModifyVnfInfoMetadata& WithVnfInstanceId(const Aws::String& value) { SetVnfInstanceId(value); return *this;}
    inline ModifyVnfInfoMetadata& WithVnfInstanceId(Aws::String&& value) { SetVnfInstanceId(std::move(value)); return *this;}
    inline ModifyVnfInfoMetadata& WithVnfInstanceId(const char* value) { SetVnfInstanceId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_vnfConfigurableProperties;
    bool m_vnfConfigurablePropertiesHasBeenSet = false;

    Aws::String m_vnfInstanceId;
    bool m_vnfInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
