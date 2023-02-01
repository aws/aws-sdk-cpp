/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/OutputFormat.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class GenerateChangeSetRequest : public SMSRequest
  {
  public:
    AWS_SMS_API GenerateChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateChangeSet"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline GenerateChangeSetRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline GenerateChangeSetRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline GenerateChangeSetRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The format for the change set.</p>
     */
    inline const OutputFormat& GetChangesetFormat() const{ return m_changesetFormat; }

    /**
     * <p>The format for the change set.</p>
     */
    inline bool ChangesetFormatHasBeenSet() const { return m_changesetFormatHasBeenSet; }

    /**
     * <p>The format for the change set.</p>
     */
    inline void SetChangesetFormat(const OutputFormat& value) { m_changesetFormatHasBeenSet = true; m_changesetFormat = value; }

    /**
     * <p>The format for the change set.</p>
     */
    inline void SetChangesetFormat(OutputFormat&& value) { m_changesetFormatHasBeenSet = true; m_changesetFormat = std::move(value); }

    /**
     * <p>The format for the change set.</p>
     */
    inline GenerateChangeSetRequest& WithChangesetFormat(const OutputFormat& value) { SetChangesetFormat(value); return *this;}

    /**
     * <p>The format for the change set.</p>
     */
    inline GenerateChangeSetRequest& WithChangesetFormat(OutputFormat&& value) { SetChangesetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    OutputFormat m_changesetFormat;
    bool m_changesetFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
