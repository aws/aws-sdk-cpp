/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/WorldExportJobErrorCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace RoboMaker
{
namespace Model
{
  class DescribeWorldExportJobResult
  {
  public:
    AWS_ROBOMAKER_API DescribeWorldExportJobResult() = default;
    AWS_ROBOMAKER_API DescribeWorldExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API DescribeWorldExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeWorldExportJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> and <code>failureReason</code> for more
     * information. </p> </dd> <dt>Canceled</dt> <dd> <p>The world export job was
     * cancelled.</p> </dd> <dt>Canceling</dt> <dd> <p>The world export job is being
     * cancelled.</p> </dd> </dl>
     */
    inline WorldExportJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(WorldExportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeWorldExportJobResult& WithStatus(WorldExportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeWorldExportJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline WorldExportJobErrorCode GetFailureCode() const { return m_failureCode; }
    inline void SetFailureCode(WorldExportJobErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline DescribeWorldExportJobResult& WithFailureCode(WorldExportJobErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeWorldExportJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    DescribeWorldExportJobResult& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const { return m_worlds; }
    template<typename WorldsT = Aws::Vector<Aws::String>>
    void SetWorlds(WorldsT&& value) { m_worldsHasBeenSet = true; m_worlds = std::forward<WorldsT>(value); }
    template<typename WorldsT = Aws::Vector<Aws::String>>
    DescribeWorldExportJobResult& WithWorlds(WorldsT&& value) { SetWorlds(std::forward<WorldsT>(value)); return *this;}
    template<typename WorldsT = Aws::String>
    DescribeWorldExportJobResult& AddWorlds(WorldsT&& value) { m_worldsHasBeenSet = true; m_worlds.emplace_back(std::forward<WorldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    DescribeWorldExportJobResult& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    DescribeWorldExportJobResult& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeWorldExportJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeWorldExportJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorldExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    WorldExportJobStatus m_status{WorldExportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    WorldExportJobErrorCode m_failureCode{WorldExportJobErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_worlds;
    bool m_worldsHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
