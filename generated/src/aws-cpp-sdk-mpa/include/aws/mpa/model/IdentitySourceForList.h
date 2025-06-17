/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/IdentitySourceType.h>
#include <aws/mpa/model/IdentitySourceParametersForList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/IdentitySourceStatus.h>
#include <aws/mpa/model/IdentitySourceStatusCode.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for an identity source. For more information, see <a
   * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Identity
   * source</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/IdentitySourceForList">AWS
   * API Reference</a></p>
   */
  class IdentitySourceForList
  {
  public:
    AWS_MPA_API IdentitySourceForList() = default;
    AWS_MPA_API IdentitySourceForList(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API IdentitySourceForList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of resource that provided identities to the identity source. For
     * example, an IAM Identity Center instance.</p>
     */
    inline IdentitySourceType GetIdentitySourceType() const { return m_identitySourceType; }
    inline bool IdentitySourceTypeHasBeenSet() const { return m_identitySourceTypeHasBeenSet; }
    inline void SetIdentitySourceType(IdentitySourceType value) { m_identitySourceTypeHasBeenSet = true; m_identitySourceType = value; }
    inline IdentitySourceForList& WithIdentitySourceType(IdentitySourceType value) { SetIdentitySourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>IdentitySourceParametersForList</code> object. Contains details for
     * the resource that provides identities to the identity source. For example, an
     * IAM Identity Center instance.</p>
     */
    inline const IdentitySourceParametersForList& GetIdentitySourceParameters() const { return m_identitySourceParameters; }
    inline bool IdentitySourceParametersHasBeenSet() const { return m_identitySourceParametersHasBeenSet; }
    template<typename IdentitySourceParametersT = IdentitySourceParametersForList>
    void SetIdentitySourceParameters(IdentitySourceParametersT&& value) { m_identitySourceParametersHasBeenSet = true; m_identitySourceParameters = std::forward<IdentitySourceParametersT>(value); }
    template<typename IdentitySourceParametersT = IdentitySourceParametersForList>
    IdentitySourceForList& WithIdentitySourceParameters(IdentitySourceParametersT&& value) { SetIdentitySourceParameters(std::forward<IdentitySourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceArn() const { return m_identitySourceArn; }
    inline bool IdentitySourceArnHasBeenSet() const { return m_identitySourceArnHasBeenSet; }
    template<typename IdentitySourceArnT = Aws::String>
    void SetIdentitySourceArn(IdentitySourceArnT&& value) { m_identitySourceArnHasBeenSet = true; m_identitySourceArn = std::forward<IdentitySourceArnT>(value); }
    template<typename IdentitySourceArnT = Aws::String>
    IdentitySourceForList& WithIdentitySourceArn(IdentitySourceArnT&& value) { SetIdentitySourceArn(std::forward<IdentitySourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the identity source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    IdentitySourceForList& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the identity source. For example, if the identity source is
     * <code>ACTIVE</code>.</p>
     */
    inline IdentitySourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IdentitySourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IdentitySourceForList& WithStatus(IdentitySourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code of the identity source.</p>
     */
    inline IdentitySourceStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(IdentitySourceStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline IdentitySourceForList& WithStatusCode(IdentitySourceStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the status for the identity source.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    IdentitySourceForList& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    IdentitySourceType m_identitySourceType{IdentitySourceType::NOT_SET};
    bool m_identitySourceTypeHasBeenSet = false;

    IdentitySourceParametersForList m_identitySourceParameters;
    bool m_identitySourceParametersHasBeenSet = false;

    Aws::String m_identitySourceArn;
    bool m_identitySourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    IdentitySourceStatus m_status{IdentitySourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IdentitySourceStatusCode m_statusCode{IdentitySourceStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
