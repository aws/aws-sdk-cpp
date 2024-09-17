/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * <p>Updates the specified configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConfigurationRequest : public MQRequest
  {
  public:
    AWS_MQ_API UpdateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguration"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }
    inline UpdateConfigurationRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}
    inline UpdateConfigurationRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}
    inline UpdateConfigurationRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon MQ for Active MQ: The base64-encoded XML configuration. Amazon MQ for
     * RabbitMQ: the base64-encoded Cuttlefish configuration.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }
    inline UpdateConfigurationRequest& WithData(const Aws::String& value) { SetData(value); return *this;}
    inline UpdateConfigurationRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}
    inline UpdateConfigurationRequest& WithData(const char* value) { SetData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
