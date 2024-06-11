/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Details from a successful operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchSuccessfulResultModel">AWS
   * API Reference</a></p>
   */
  class BatchSuccessfulResultModel
  {
  public:
    AWS_MEDIALIVE_API BatchSuccessfulResultModel();
    AWS_MEDIALIVE_API BatchSuccessfulResultModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BatchSuccessfulResultModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * ARN of the resource
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BatchSuccessfulResultModel& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BatchSuccessfulResultModel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BatchSuccessfulResultModel& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * ID of the resource
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BatchSuccessfulResultModel& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BatchSuccessfulResultModel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BatchSuccessfulResultModel& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * Current state of the resource
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline BatchSuccessfulResultModel& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline BatchSuccessfulResultModel& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline BatchSuccessfulResultModel& WithState(const char* value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
