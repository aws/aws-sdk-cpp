/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/CustomWorkspaceImageImportState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/ImageSourceIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/CustomWorkspaceImageImportErrorDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeCustomWorkspaceImageImportResult
  {
  public:
    AWS_WORKSPACES_API DescribeCustomWorkspaceImageImportResult() = default;
    AWS_WORKSPACES_API DescribeCustomWorkspaceImageImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeCustomWorkspaceImageImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    DescribeCustomWorkspaceImageImportResult& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure configuration ARN that specifies how the WorkSpace image
     * is built.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const { return m_infrastructureConfigurationArn; }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    void SetInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::forward<InfrastructureConfigurationArnT>(value); }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    DescribeCustomWorkspaceImageImportResult& WithInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { SetInfrastructureConfigurationArn(std::forward<InfrastructureConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the WorkSpace image.</p>
     */
    inline CustomWorkspaceImageImportState GetState() const { return m_state; }
    inline void SetState(CustomWorkspaceImageImportState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeCustomWorkspaceImageImportResult& WithState(CustomWorkspaceImageImportState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the WorkSpace image import was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    DescribeCustomWorkspaceImageImportResult& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the WorkSpace image import was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeCustomWorkspaceImageImportResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the image import source.</p>
     */
    inline const ImageSourceIdentifier& GetImageSource() const { return m_imageSource; }
    template<typename ImageSourceT = ImageSourceIdentifier>
    void SetImageSource(ImageSourceT&& value) { m_imageSourceHasBeenSet = true; m_imageSource = std::forward<ImageSourceT>(value); }
    template<typename ImageSourceT = ImageSourceIdentifier>
    DescribeCustomWorkspaceImageImportResult& WithImageSource(ImageSourceT&& value) { SetImageSource(std::forward<ImageSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image builder instance ID of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageBuilderInstanceId() const { return m_imageBuilderInstanceId; }
    template<typename ImageBuilderInstanceIdT = Aws::String>
    void SetImageBuilderInstanceId(ImageBuilderInstanceIdT&& value) { m_imageBuilderInstanceIdHasBeenSet = true; m_imageBuilderInstanceId = std::forward<ImageBuilderInstanceIdT>(value); }
    template<typename ImageBuilderInstanceIdT = Aws::String>
    DescribeCustomWorkspaceImageImportResult& WithImageBuilderInstanceId(ImageBuilderInstanceIdT&& value) { SetImageBuilderInstanceId(std::forward<ImageBuilderInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes in-depth details about the error. These details include the
     * possible causes of the error and troubleshooting information.</p>
     */
    inline const Aws::Vector<CustomWorkspaceImageImportErrorDetails>& GetErrorDetails() const { return m_errorDetails; }
    template<typename ErrorDetailsT = Aws::Vector<CustomWorkspaceImageImportErrorDetails>>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::Vector<CustomWorkspaceImageImportErrorDetails>>
    DescribeCustomWorkspaceImageImportResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    template<typename ErrorDetailsT = CustomWorkspaceImageImportErrorDetails>
    DescribeCustomWorkspaceImageImportResult& AddErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCustomWorkspaceImageImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet = false;

    CustomWorkspaceImageImportState m_state{CustomWorkspaceImageImportState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    ImageSourceIdentifier m_imageSource;
    bool m_imageSourceHasBeenSet = false;

    Aws::String m_imageBuilderInstanceId;
    bool m_imageBuilderInstanceIdHasBeenSet = false;

    Aws::Vector<CustomWorkspaceImageImportErrorDetails> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
