﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Detailed information about the self-service action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ServiceActionSummary">AWS
   * API Reference</a></p>
   */
  class ServiceActionSummary
  {
  public:
    AWS_SERVICECATALOG_API ServiceActionSummary();
    AWS_SERVICECATALOG_API ServiceActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ServiceActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The self-service action identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceActionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceActionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceActionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self-service action name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceActionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceActionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceActionSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self-service action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceActionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceActionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceActionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self-service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline const ServiceActionDefinitionType& GetDefinitionType() const{ return m_definitionType; }
    inline bool DefinitionTypeHasBeenSet() const { return m_definitionTypeHasBeenSet; }
    inline void SetDefinitionType(const ServiceActionDefinitionType& value) { m_definitionTypeHasBeenSet = true; m_definitionType = value; }
    inline void SetDefinitionType(ServiceActionDefinitionType&& value) { m_definitionTypeHasBeenSet = true; m_definitionType = std::move(value); }
    inline ServiceActionSummary& WithDefinitionType(const ServiceActionDefinitionType& value) { SetDefinitionType(value); return *this;}
    inline ServiceActionSummary& WithDefinitionType(ServiceActionDefinitionType&& value) { SetDefinitionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceActionDefinitionType m_definitionType;
    bool m_definitionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
