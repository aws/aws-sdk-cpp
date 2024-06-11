/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorStatus.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>An object that recognizes faces or labels in a streaming video. An Amazon
   * Rekognition stream processor is created by a call to
   * <a>CreateStreamProcessor</a>. The request parameters for
   * <code>CreateStreamProcessor</code> describe the Kinesis video stream source for
   * the streaming video, face recognition parameters, and where to stream the
   * analysis resullts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessor">AWS
   * API Reference</a></p>
   */
  class StreamProcessor
  {
  public:
    AWS_REKOGNITION_API StreamProcessor();
    AWS_REKOGNITION_API StreamProcessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StreamProcessor& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StreamProcessor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StreamProcessor& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline const StreamProcessorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StreamProcessorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StreamProcessorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StreamProcessor& WithStatus(const StreamProcessorStatus& value) { SetStatus(value); return *this;}
    inline StreamProcessor& WithStatus(StreamProcessorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessorStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
