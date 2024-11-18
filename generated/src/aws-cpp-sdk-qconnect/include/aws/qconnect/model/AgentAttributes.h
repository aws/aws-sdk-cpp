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
   * <p>Information about an agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AgentAttributes">AWS
   * API Reference</a></p>
   */
  class AgentAttributes
  {
  public:
    AWS_QCONNECT_API AgentAttributes();
    AWS_QCONNECT_API AgentAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AgentAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent’s first name as entered in their Amazon Connect user account.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline AgentAttributes& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline AgentAttributes& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline AgentAttributes& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent’s last name as entered in their Amazon Connect user account.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline AgentAttributes& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline AgentAttributes& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline AgentAttributes& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}
  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
