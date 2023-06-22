/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class PublishStateMachineVersionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API PublishStateMachineVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishStateMachineVersion"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline PublishStateMachineVersionRequest& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline PublishStateMachineVersionRequest& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline PublishStateMachineVersionRequest& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline PublishStateMachineVersionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline PublishStateMachineVersionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Only publish the state machine version if the current state machine's
     * revision ID matches the specified ID.</p> <p>Use this option to avoid publishing
     * a version if the state machine changed since you last updated it. If the
     * specified revision ID doesn't match the state machine's current revision ID, the
     * API returns <code>ConflictException</code>.</p>  <p>To specify an initial
     * revision ID for a state machine with no revision ID assigned, specify the string
     * <code>INITIAL</code> for the <code>revisionId</code> parameter. For example, you
     * can specify a <code>revisionID</code> of <code>INITIAL</code> when you create a
     * state machine using the <a>CreateStateMachine</a> API action.</p> 
     */
    inline PublishStateMachineVersionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline PublishStateMachineVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline PublishStateMachineVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the state machine version.</p>
     */
    inline PublishStateMachineVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
