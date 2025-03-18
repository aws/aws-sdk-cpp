/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/KinesisVideoStreamStartSelector.h>
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
   * <p>This is a required parameter for label detection stream processors and should
   * not be used to start a face search stream processor.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessingStartSelector">AWS
   * API Reference</a></p>
   */
  class StreamProcessingStartSelector
  {
  public:
    AWS_REKOGNITION_API StreamProcessingStartSelector() = default;
    AWS_REKOGNITION_API StreamProcessingStartSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessingStartSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a producer timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline const KinesisVideoStreamStartSelector& GetKVSStreamStartSelector() const { return m_kVSStreamStartSelector; }
    inline bool KVSStreamStartSelectorHasBeenSet() const { return m_kVSStreamStartSelectorHasBeenSet; }
    template<typename KVSStreamStartSelectorT = KinesisVideoStreamStartSelector>
    void SetKVSStreamStartSelector(KVSStreamStartSelectorT&& value) { m_kVSStreamStartSelectorHasBeenSet = true; m_kVSStreamStartSelector = std::forward<KVSStreamStartSelectorT>(value); }
    template<typename KVSStreamStartSelectorT = KinesisVideoStreamStartSelector>
    StreamProcessingStartSelector& WithKVSStreamStartSelector(KVSStreamStartSelectorT&& value) { SetKVSStreamStartSelector(std::forward<KVSStreamStartSelectorT>(value)); return *this;}
    ///@}
  private:

    KinesisVideoStreamStartSelector m_kVSStreamStartSelector;
    bool m_kVSStreamStartSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
