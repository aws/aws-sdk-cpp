/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/SessionFilterKey.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for Session Manager information.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SessionFilter">AWS
   * API Reference</a></p>
   */
  class SessionFilter
  {
  public:
    AWS_SSM_API SessionFilter();
    AWS_SSM_API SessionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API SessionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const SessionFilterKey& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const SessionFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(SessionFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline SessionFilter& WithKey(const SessionFilterKey& value) { SetKey(value); return *this;}
    inline SessionFilter& WithKey(SessionFilterKey&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2024-08-29T00:00:00Z to see sessions that started August 29, 2024, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2024-08-29T00:00:00Z to see sessions that started
     * before August 29, 2024.</p> </li> <li> <p>Target: Specify a managed node to
     * which session connections have been made.</p> </li> <li> <p>Owner: Specify an
     * Amazon Web Services user to see a list of sessions started by that user.</p>
     * </li> <li> <p>Status: Specify a valid session status to see a list of all
     * sessions with that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> <li> <p>SessionId: Specify a session ID to
     * return details about the session.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline SessionFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline SessionFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline SessionFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    SessionFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
