/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/SystemEndpointAttributes.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The system attributes that are used with the message template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SystemAttributes">AWS
   * API Reference</a></p>
   */
  class SystemAttributes
  {
  public:
    AWS_QCONNECT_API SystemAttributes() = default;
    AWS_QCONNECT_API SystemAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SystemAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the task.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SystemAttributes& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CustomerEndpoint attribute.</p>
     */
    inline const SystemEndpointAttributes& GetCustomerEndpoint() const { return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    template<typename CustomerEndpointT = SystemEndpointAttributes>
    void SetCustomerEndpoint(CustomerEndpointT&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::forward<CustomerEndpointT>(value); }
    template<typename CustomerEndpointT = SystemEndpointAttributes>
    SystemAttributes& WithCustomerEndpoint(CustomerEndpointT&& value) { SetCustomerEndpoint(std::forward<CustomerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SystemEndpoint attribute.</p>
     */
    inline const SystemEndpointAttributes& GetSystemEndpoint() const { return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    template<typename SystemEndpointT = SystemEndpointAttributes>
    void SetSystemEndpoint(SystemEndpointT&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::forward<SystemEndpointT>(value); }
    template<typename SystemEndpointT = SystemEndpointAttributes>
    SystemAttributes& WithSystemEndpoint(SystemEndpointT&& value) { SetSystemEndpoint(std::forward<SystemEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SystemEndpointAttributes m_customerEndpoint;
    bool m_customerEndpointHasBeenSet = false;

    SystemEndpointAttributes m_systemEndpoint;
    bool m_systemEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
