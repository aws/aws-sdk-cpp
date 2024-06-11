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
   * <p>Contains details about a state entered during an execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StateEnteredEventDetails">AWS
   * API Reference</a></p>
   */
  class StateEnteredEventDetails
  {
  public:
    AWS_SFN_API StateEnteredEventDetails();
    AWS_SFN_API StateEnteredEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateEnteredEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StateEnteredEventDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StateEnteredEventDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StateEnteredEventDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data for the state. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline StateEnteredEventDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline StateEnteredEventDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline StateEnteredEventDetails& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetInputDetails() const{ return m_inputDetails; }
    inline bool InputDetailsHasBeenSet() const { return m_inputDetailsHasBeenSet; }
    inline void SetInputDetails(const HistoryEventExecutionDataDetails& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = value; }
    inline void SetInputDetails(HistoryEventExecutionDataDetails&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::move(value); }
    inline StateEnteredEventDetails& WithInputDetails(const HistoryEventExecutionDataDetails& value) { SetInputDetails(value); return *this;}
    inline StateEnteredEventDetails& WithInputDetails(HistoryEventExecutionDataDetails&& value) { SetInputDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_inputDetails;
    bool m_inputDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
