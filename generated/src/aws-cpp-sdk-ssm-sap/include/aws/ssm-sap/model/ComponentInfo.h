/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ComponentType.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>This is information about the component of your SAP application, such as Web
   * Dispatcher.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ComponentInfo">AWS
   * API Reference</a></p>
   */
  class ComponentInfo
  {
  public:
    AWS_SSMSAP_API ComponentInfo() = default;
    AWS_SSMSAP_API ComponentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ComponentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This string is the type of the component.</p> <p>Accepted value is
     * <code>WD</code>.</p>
     */
    inline ComponentType GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(ComponentType value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline ComponentInfo& WithComponentType(ComponentType value) { SetComponentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This string is the SAP System ID of the component.</p> <p>Accepted values are
     * alphanumeric.</p>
     */
    inline const Aws::String& GetSid() const { return m_sid; }
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
    template<typename SidT = Aws::String>
    void SetSid(SidT&& value) { m_sidHasBeenSet = true; m_sid = std::forward<SidT>(value); }
    template<typename SidT = Aws::String>
    ComponentInfo& WithSid(SidT&& value) { SetSid(std::forward<SidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the Amazon EC2 instance on which your SAP component is running.</p>
     * <p>Accepted values are alphanumeric.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    ComponentInfo& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}
  private:

    ComponentType m_componentType{ComponentType::NOT_SET};
    bool m_componentTypeHasBeenSet = false;

    Aws::String m_sid;
    bool m_sidHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
