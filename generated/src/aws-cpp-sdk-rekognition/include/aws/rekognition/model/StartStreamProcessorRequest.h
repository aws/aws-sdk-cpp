/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessingStartSelector.h>
#include <aws/rekognition/model/StreamProcessingStopSelector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartStreamProcessorRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartStreamProcessorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartStreamProcessor"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stream processor to start processing.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartStreamProcessorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the starting point in the Kinesis stream to start processing. You
     * can use the producer timestamp or the fragment number. If you use the producer
     * timestamp, you must put the time in milliseconds. For more information about
     * fragment numbers, see <a
     * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_reader_Fragment.html">Fragment</a>.
     * </p> <p>This is a required parameter for label detection stream processors and
     * should not be used to start a face search stream processor.</p>
     */
    inline const StreamProcessingStartSelector& GetStartSelector() const { return m_startSelector; }
    inline bool StartSelectorHasBeenSet() const { return m_startSelectorHasBeenSet; }
    template<typename StartSelectorT = StreamProcessingStartSelector>
    void SetStartSelector(StartSelectorT&& value) { m_startSelectorHasBeenSet = true; m_startSelector = std::forward<StartSelectorT>(value); }
    template<typename StartSelectorT = StreamProcessingStartSelector>
    StartStreamProcessorRequest& WithStartSelector(StartSelectorT&& value) { SetStartSelector(std::forward<StartSelectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when to stop processing the stream. You can specify a maximum
     * amount of time to process the video. </p> <p>This is a required parameter for
     * label detection stream processors and should not be used to start a face search
     * stream processor.</p>
     */
    inline const StreamProcessingStopSelector& GetStopSelector() const { return m_stopSelector; }
    inline bool StopSelectorHasBeenSet() const { return m_stopSelectorHasBeenSet; }
    template<typename StopSelectorT = StreamProcessingStopSelector>
    void SetStopSelector(StopSelectorT&& value) { m_stopSelectorHasBeenSet = true; m_stopSelector = std::forward<StopSelectorT>(value); }
    template<typename StopSelectorT = StreamProcessingStopSelector>
    StartStreamProcessorRequest& WithStopSelector(StopSelectorT&& value) { SetStopSelector(std::forward<StopSelectorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessingStartSelector m_startSelector;
    bool m_startSelectorHasBeenSet = false;

    StreamProcessingStopSelector m_stopSelector;
    bool m_stopSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
