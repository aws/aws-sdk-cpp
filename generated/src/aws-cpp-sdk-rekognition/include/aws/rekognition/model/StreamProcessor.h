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
    AWS_REKOGNITION_API StreamProcessor() = default;
    AWS_REKOGNITION_API StreamProcessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StreamProcessor& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline StreamProcessorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StreamProcessorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StreamProcessor& WithStatus(StreamProcessorStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessorStatus m_status{StreamProcessorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
