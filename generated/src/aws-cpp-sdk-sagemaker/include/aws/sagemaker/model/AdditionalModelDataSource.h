/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/S3ModelDataSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Data sources that are available to your model in addition to the one that you
   * specify for <code>ModelDataSource</code> when you use the
   * <code>CreateModel</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AdditionalModelDataSource">AWS
   * API Reference</a></p>
   */
  class AdditionalModelDataSource
  {
  public:
    AWS_SAGEMAKER_API AdditionalModelDataSource() = default;
    AWS_SAGEMAKER_API AdditionalModelDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalModelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A custom name for this <code>AdditionalModelDataSource</code> object.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    AdditionalModelDataSource& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3ModelDataSource& GetS3DataSource() const { return m_s3DataSource; }
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
    template<typename S3DataSourceT = S3ModelDataSource>
    void SetS3DataSource(S3DataSourceT&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::forward<S3DataSourceT>(value); }
    template<typename S3DataSourceT = S3ModelDataSource>
    AdditionalModelDataSource& WithS3DataSource(S3DataSourceT&& value) { SetS3DataSource(std::forward<S3DataSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    S3ModelDataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
