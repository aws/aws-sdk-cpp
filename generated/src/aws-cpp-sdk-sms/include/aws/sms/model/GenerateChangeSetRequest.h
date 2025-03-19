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
    AWS_SMS_API GenerateChangeSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateChangeSet"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the application associated with the change set.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    GenerateChangeSetRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the change set.</p>
     */
    inline OutputFormat GetChangesetFormat() const { return m_changesetFormat; }
    inline bool ChangesetFormatHasBeenSet() const { return m_changesetFormatHasBeenSet; }
    inline void SetChangesetFormat(OutputFormat value) { m_changesetFormatHasBeenSet = true; m_changesetFormat = value; }
    inline GenerateChangeSetRequest& WithChangesetFormat(OutputFormat value) { SetChangesetFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    OutputFormat m_changesetFormat{OutputFormat::NOT_SET};
    bool m_changesetFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
