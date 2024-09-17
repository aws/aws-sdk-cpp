/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/SourceType.h>
#include <aws/mediaconnect/model/Status.h>
#include <aws/mediaconnect/model/Maintenance.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Provides a summary of a flow, including its ARN, Availability Zone, and source
   * type.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedFlow">AWS
   * API Reference</a></p>
   */
  class ListedFlow
  {
  public:
    AWS_MEDIACONNECT_API ListedFlow();
    AWS_MEDIACONNECT_API ListedFlow(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedFlow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Availability Zone that the flow was created in.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ListedFlow& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ListedFlow& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ListedFlow& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * A description of the flow.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ListedFlow& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ListedFlow& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ListedFlow& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline ListedFlow& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline ListedFlow& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline ListedFlow& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListedFlow& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListedFlow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListedFlow& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of source. This value is either owned (originated somewhere other than
     * an AWS Elemental MediaConnect flow owned by another AWS account) or entitled
     * (originated at an AWS Elemental MediaConnect flow owned by another AWS account).
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline ListedFlow& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline ListedFlow& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current status of the flow.
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListedFlow& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline ListedFlow& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Maintenance& GetMaintenance() const{ return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    inline void SetMaintenance(const Maintenance& value) { m_maintenanceHasBeenSet = true; m_maintenance = value; }
    inline void SetMaintenance(Maintenance&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::move(value); }
    inline ListedFlow& WithMaintenance(const Maintenance& value) { SetMaintenance(value); return *this;}
    inline ListedFlow& WithMaintenance(Maintenance&& value) { SetMaintenance(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Maintenance m_maintenance;
    bool m_maintenanceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
