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
    AWS_REKOGNITION_API StartStreamProcessorRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartStreamProcessorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartStreamProcessorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartStreamProcessorRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline const StreamProcessingStartSelector& GetStartSelector() const{ return m_startSelector; }
    inline bool StartSelectorHasBeenSet() const { return m_startSelectorHasBeenSet; }
    inline void SetStartSelector(const StreamProcessingStartSelector& value) { m_startSelectorHasBeenSet = true; m_startSelector = value; }
    inline void SetStartSelector(StreamProcessingStartSelector&& value) { m_startSelectorHasBeenSet = true; m_startSelector = std::move(value); }
    inline StartStreamProcessorRequest& WithStartSelector(const StreamProcessingStartSelector& value) { SetStartSelector(value); return *this;}
    inline StartStreamProcessorRequest& WithStartSelector(StreamProcessingStartSelector&& value) { SetStartSelector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when to stop processing the stream. You can specify a maximum
     * amount of time to process the video. </p> <p>This is a required parameter for
     * label detection stream processors and should not be used to start a face search
     * stream processor.</p>
     */
    inline const StreamProcessingStopSelector& GetStopSelector() const{ return m_stopSelector; }
    inline bool StopSelectorHasBeenSet() const { return m_stopSelectorHasBeenSet; }
    inline void SetStopSelector(const StreamProcessingStopSelector& value) { m_stopSelectorHasBeenSet = true; m_stopSelector = value; }
    inline void SetStopSelector(StreamProcessingStopSelector&& value) { m_stopSelectorHasBeenSet = true; m_stopSelector = std::move(value); }
    inline StartStreamProcessorRequest& WithStopSelector(const StreamProcessingStopSelector& value) { SetStopSelector(value); return *this;}
    inline StartStreamProcessorRequest& WithStopSelector(StreamProcessingStopSelector&& value) { SetStopSelector(std::move(value)); return *this;}
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
