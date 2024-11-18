/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
   * <p>The system endpoint attributes that are used with the message
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SystemEndpointAttributes">AWS
   * API Reference</a></p>
   */
  class SystemEndpointAttributes
  {
  public:
    AWS_QCONNECT_API SystemEndpointAttributes();
    AWS_QCONNECT_API SystemEndpointAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SystemEndpointAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer's phone number if used with <code>customerEndpoint</code>, or
     * the number the customer dialed to call your contact center if used with
     * <code>systemEndpoint</code>.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline SystemEndpointAttributes& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline SystemEndpointAttributes& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline SystemEndpointAttributes& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
