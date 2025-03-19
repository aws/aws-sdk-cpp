/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/S3DataConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The output configuration parameters of a batch segment job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchSegmentJobOutput">AWS
   * API Reference</a></p>
   */
  class BatchSegmentJobOutput
  {
  public:
    AWS_PERSONALIZE_API BatchSegmentJobOutput() = default;
    AWS_PERSONALIZE_API BatchSegmentJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchSegmentJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3DataConfig& GetS3DataDestination() const { return m_s3DataDestination; }
    inline bool S3DataDestinationHasBeenSet() const { return m_s3DataDestinationHasBeenSet; }
    template<typename S3DataDestinationT = S3DataConfig>
    void SetS3DataDestination(S3DataDestinationT&& value) { m_s3DataDestinationHasBeenSet = true; m_s3DataDestination = std::forward<S3DataDestinationT>(value); }
    template<typename S3DataDestinationT = S3DataConfig>
    BatchSegmentJobOutput& WithS3DataDestination(S3DataDestinationT&& value) { SetS3DataDestination(std::forward<S3DataDestinationT>(value)); return *this;}
    ///@}
  private:

    S3DataConfig m_s3DataDestination;
    bool m_s3DataDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
