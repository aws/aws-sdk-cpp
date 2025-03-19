/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/Checksum.h>
#include <aws/sagemaker-edge/model/ModelState.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/Definition">AWS
   * API Reference</a></p>
   */
  class Definition
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API Definition() = default;
    AWS_SAGEMAKEREDGEMANAGER_API Definition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Definition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique model handle.</p>
     */
    inline const Aws::String& GetModelHandle() const { return m_modelHandle; }
    inline bool ModelHandleHasBeenSet() const { return m_modelHandleHasBeenSet; }
    template<typename ModelHandleT = Aws::String>
    void SetModelHandle(ModelHandleT&& value) { m_modelHandleHasBeenSet = true; m_modelHandle = std::forward<ModelHandleT>(value); }
    template<typename ModelHandleT = Aws::String>
    Definition& WithModelHandle(ModelHandleT&& value) { SetModelHandle(std::forward<ModelHandleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute S3 location of the model.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    Definition& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum information of the model.</p>
     */
    inline const Checksum& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Checksum>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Checksum>
    Definition& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired state of the model.</p>
     */
    inline ModelState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ModelState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Definition& WithState(ModelState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_modelHandle;
    bool m_modelHandleHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    Checksum m_checksum;
    bool m_checksumHasBeenSet = false;

    ModelState m_state{ModelState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
