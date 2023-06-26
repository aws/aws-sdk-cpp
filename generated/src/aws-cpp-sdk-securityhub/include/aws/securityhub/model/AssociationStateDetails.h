/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Describes the state of an association between a route table and a subnet or
   * gateway. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AssociationStateDetails">AWS
   * API Reference</a></p>
   */
  class AssociationStateDetails
  {
  public:
    AWS_SECURITYHUB_API AssociationStateDetails();
    AWS_SECURITYHUB_API AssociationStateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AssociationStateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The state of the association. </p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p> The state of the association. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p> The state of the association. </p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p> The state of the association. </p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p> The state of the association. </p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p> The state of the association. </p>
     */
    inline AssociationStateDetails& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p> The state of the association. </p>
     */
    inline AssociationStateDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p> The state of the association. </p>
     */
    inline AssociationStateDetails& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p> The status message, if applicable. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> The status message, if applicable. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> The status message, if applicable. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> The status message, if applicable. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> The status message, if applicable. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> The status message, if applicable. </p>
     */
    inline AssociationStateDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> The status message, if applicable. </p>
     */
    inline AssociationStateDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The status message, if applicable. </p>
     */
    inline AssociationStateDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
