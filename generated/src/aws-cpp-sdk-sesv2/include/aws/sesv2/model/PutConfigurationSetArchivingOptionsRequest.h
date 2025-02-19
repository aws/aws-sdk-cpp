/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to associate a configuration set with a MailManager
   * archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetArchivingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetArchivingOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutConfigurationSetArchivingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetArchivingOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set to associate with a MailManager
     * archive.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline PutConfigurationSetArchivingOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline PutConfigurationSetArchivingOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline PutConfigurationSetArchivingOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MailManager archive that the Amazon SES
     * API v2 sends email to.</p>
     */
    inline const Aws::String& GetArchiveArn() const{ return m_archiveArn; }
    inline bool ArchiveArnHasBeenSet() const { return m_archiveArnHasBeenSet; }
    inline void SetArchiveArn(const Aws::String& value) { m_archiveArnHasBeenSet = true; m_archiveArn = value; }
    inline void SetArchiveArn(Aws::String&& value) { m_archiveArnHasBeenSet = true; m_archiveArn = std::move(value); }
    inline void SetArchiveArn(const char* value) { m_archiveArnHasBeenSet = true; m_archiveArn.assign(value); }
    inline PutConfigurationSetArchivingOptionsRequest& WithArchiveArn(const Aws::String& value) { SetArchiveArn(value); return *this;}
    inline PutConfigurationSetArchivingOptionsRequest& WithArchiveArn(Aws::String&& value) { SetArchiveArn(std::move(value)); return *this;}
    inline PutConfigurationSetArchivingOptionsRequest& WithArchiveArn(const char* value) { SetArchiveArn(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_archiveArn;
    bool m_archiveArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
