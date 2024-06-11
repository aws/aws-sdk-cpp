/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEventExecutionDataDetails.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an exit from a state during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StateExitedEventDetails">AWS
   * API Reference</a></p>
   */
  class StateExitedEventDetails
  {
  public:
    AWS_SFN_API StateExitedEventDetails();
    AWS_SFN_API StateExitedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateExitedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>)</p>
     * </li> </ul> <p>To enable logging with CloudWatch Logs, the name should only
     * contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StateExitedEventDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StateExitedEventDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StateExitedEventDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }
    inline StateExitedEventDetails& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}
    inline StateExitedEventDetails& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}
    inline StateExitedEventDetails& WithOutput(const char* value) { SetOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the output of an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetOutputDetails() const{ return m_outputDetails; }
    inline bool OutputDetailsHasBeenSet() const { return m_outputDetailsHasBeenSet; }
    inline void SetOutputDetails(const HistoryEventExecutionDataDetails& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = value; }
    inline void SetOutputDetails(HistoryEventExecutionDataDetails&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::move(value); }
    inline StateExitedEventDetails& WithOutputDetails(const HistoryEventExecutionDataDetails& value) { SetOutputDetails(value); return *this;}
    inline StateExitedEventDetails& WithOutputDetails(HistoryEventExecutionDataDetails&& value) { SetOutputDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_outputDetails;
    bool m_outputDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
