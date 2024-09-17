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
    AWS_SAGEMAKER_API AdditionalModelDataSource();
    AWS_SAGEMAKER_API AdditionalModelDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalModelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A custom name for this <code>AdditionalModelDataSource</code> object.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline AdditionalModelDataSource& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline AdditionalModelDataSource& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline AdditionalModelDataSource& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    
    inline const S3ModelDataSource& GetS3DataSource() const{ return m_s3DataSource; }
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
    inline void SetS3DataSource(const S3ModelDataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }
    inline void SetS3DataSource(S3ModelDataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }
    inline AdditionalModelDataSource& WithS3DataSource(const S3ModelDataSource& value) { SetS3DataSource(value); return *this;}
    inline AdditionalModelDataSource& WithS3DataSource(S3ModelDataSource&& value) { SetS3DataSource(std::move(value)); return *this;}
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
