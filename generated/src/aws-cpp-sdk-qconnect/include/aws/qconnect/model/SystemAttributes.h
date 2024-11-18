/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/SystemEndpointAttributes.h>
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
    AWS_QCONNECT_API SystemAttributes();
    AWS_QCONNECT_API SystemAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SystemAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CustomerEndpoint attribute.</p>
     */
    inline const SystemEndpointAttributes& GetCustomerEndpoint() const{ return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    inline void SetCustomerEndpoint(const SystemEndpointAttributes& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = value; }
    inline void SetCustomerEndpoint(SystemEndpointAttributes&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::move(value); }
    inline SystemAttributes& WithCustomerEndpoint(const SystemEndpointAttributes& value) { SetCustomerEndpoint(value); return *this;}
    inline SystemAttributes& WithCustomerEndpoint(SystemEndpointAttributes&& value) { SetCustomerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SystemAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SystemAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SystemAttributes& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SystemEndpoint attribute.</p>
     */
    inline const SystemEndpointAttributes& GetSystemEndpoint() const{ return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    inline void SetSystemEndpoint(const SystemEndpointAttributes& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = value; }
    inline void SetSystemEndpoint(SystemEndpointAttributes&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::move(value); }
    inline SystemAttributes& WithSystemEndpoint(const SystemEndpointAttributes& value) { SetSystemEndpoint(value); return *this;}
    inline SystemAttributes& WithSystemEndpoint(SystemEndpointAttributes&& value) { SetSystemEndpoint(std::move(value)); return *this;}
    ///@}
  private:

    SystemEndpointAttributes m_customerEndpoint;
    bool m_customerEndpointHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SystemEndpointAttributes m_systemEndpoint;
    bool m_systemEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
