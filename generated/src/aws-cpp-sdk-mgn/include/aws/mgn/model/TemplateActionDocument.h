/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
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
namespace mgn
{
namespace Model
{

  class TemplateActionDocument
  {
  public:
    AWS_MGN_API TemplateActionDocument();
    AWS_MGN_API TemplateActionDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API TemplateActionDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline void SetActionID(const Aws::String& value) { m_actionIDHasBeenSet = true; m_actionID = value; }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline void SetActionID(Aws::String&& value) { m_actionIDHasBeenSet = true; m_actionID = std::move(value); }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline void SetActionID(const char* value) { m_actionIDHasBeenSet = true; m_actionID.assign(value); }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline TemplateActionDocument& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline TemplateActionDocument& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline TemplateActionDocument& WithActionID(const char* value) { SetActionID(value); return *this;}


    /**
     * <p>Template post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline TemplateActionDocument& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline TemplateActionDocument& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline TemplateActionDocument& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline TemplateActionDocument& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline bool DocumentIdentifierHasBeenSet() const { return m_documentIdentifierHasBeenSet; }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = value; }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = std::move(value); }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier.assign(value); }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline TemplateActionDocument& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline TemplateActionDocument& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline TemplateActionDocument& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}


    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline TemplateActionDocument& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline TemplateActionDocument& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline TemplateActionDocument& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }

    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }

    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }

    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline TemplateActionDocument& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}


    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline TemplateActionDocument& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline TemplateActionDocument& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline TemplateActionDocument& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}


    /**
     * <p>Template post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>Template post migration custom action order.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Template post migration custom action order.</p>
     */
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Template post migration custom action order.</p>
     */
    inline TemplateActionDocument& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline TemplateActionDocument& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline TemplateActionDocument& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_documentIdentifier;
    bool m_documentIdentifierHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    bool m_mustSucceedForCutover;
    bool m_mustSucceedForCutoverHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    int m_order;
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
