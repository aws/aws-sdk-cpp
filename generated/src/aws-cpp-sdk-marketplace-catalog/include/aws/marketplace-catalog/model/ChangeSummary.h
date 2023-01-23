/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/Entity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/ErrorDetail.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>This object is a container for common summary information about the change.
   * The summary doesn't contain the whole change structure.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ChangeSummary">AWS
   * API Reference</a></p>
   */
  class ChangeSummary
  {
  public:
    AWS_MARKETPLACECATALOG_API ChangeSummary();
    AWS_MARKETPLACECATALOG_API ChangeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ChangeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the change.</p>
     */
    inline const Aws::String& GetChangeType() const{ return m_changeType; }

    /**
     * <p>The type of the change.</p>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>The type of the change.</p>
     */
    inline void SetChangeType(const Aws::String& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>The type of the change.</p>
     */
    inline void SetChangeType(Aws::String&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>The type of the change.</p>
     */
    inline void SetChangeType(const char* value) { m_changeTypeHasBeenSet = true; m_changeType.assign(value); }

    /**
     * <p>The type of the change.</p>
     */
    inline ChangeSummary& WithChangeType(const Aws::String& value) { SetChangeType(value); return *this;}

    /**
     * <p>The type of the change.</p>
     */
    inline ChangeSummary& WithChangeType(Aws::String&& value) { SetChangeType(std::move(value)); return *this;}

    /**
     * <p>The type of the change.</p>
     */
    inline ChangeSummary& WithChangeType(const char* value) { SetChangeType(value); return *this;}


    /**
     * <p>The entity to be changed.</p>
     */
    inline const Entity& GetEntity() const{ return m_entity; }

    /**
     * <p>The entity to be changed.</p>
     */
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }

    /**
     * <p>The entity to be changed.</p>
     */
    inline void SetEntity(const Entity& value) { m_entityHasBeenSet = true; m_entity = value; }

    /**
     * <p>The entity to be changed.</p>
     */
    inline void SetEntity(Entity&& value) { m_entityHasBeenSet = true; m_entity = std::move(value); }

    /**
     * <p>The entity to be changed.</p>
     */
    inline ChangeSummary& WithEntity(const Entity& value) { SetEntity(value); return *this;}

    /**
     * <p>The entity to be changed.</p>
     */
    inline ChangeSummary& WithEntity(Entity&& value) { SetEntity(std::move(value)); return *this;}


    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline ChangeSummary& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline ChangeSummary& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline ChangeSummary& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetailList() const{ return m_errorDetailList; }

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline bool ErrorDetailListHasBeenSet() const { return m_errorDetailListHasBeenSet; }

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline void SetErrorDetailList(const Aws::Vector<ErrorDetail>& value) { m_errorDetailListHasBeenSet = true; m_errorDetailList = value; }

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline void SetErrorDetailList(Aws::Vector<ErrorDetail>&& value) { m_errorDetailListHasBeenSet = true; m_errorDetailList = std::move(value); }

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline ChangeSummary& WithErrorDetailList(const Aws::Vector<ErrorDetail>& value) { SetErrorDetailList(value); return *this;}

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline ChangeSummary& WithErrorDetailList(Aws::Vector<ErrorDetail>&& value) { SetErrorDetailList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline ChangeSummary& AddErrorDetailList(const ErrorDetail& value) { m_errorDetailListHasBeenSet = true; m_errorDetailList.push_back(value); return *this; }

    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline ChangeSummary& AddErrorDetailList(ErrorDetail&& value) { m_errorDetailListHasBeenSet = true; m_errorDetailList.push_back(std::move(value)); return *this; }


    /**
     * <p>Optional name for the change.</p>
     */
    inline const Aws::String& GetChangeName() const{ return m_changeName; }

    /**
     * <p>Optional name for the change.</p>
     */
    inline bool ChangeNameHasBeenSet() const { return m_changeNameHasBeenSet; }

    /**
     * <p>Optional name for the change.</p>
     */
    inline void SetChangeName(const Aws::String& value) { m_changeNameHasBeenSet = true; m_changeName = value; }

    /**
     * <p>Optional name for the change.</p>
     */
    inline void SetChangeName(Aws::String&& value) { m_changeNameHasBeenSet = true; m_changeName = std::move(value); }

    /**
     * <p>Optional name for the change.</p>
     */
    inline void SetChangeName(const char* value) { m_changeNameHasBeenSet = true; m_changeName.assign(value); }

    /**
     * <p>Optional name for the change.</p>
     */
    inline ChangeSummary& WithChangeName(const Aws::String& value) { SetChangeName(value); return *this;}

    /**
     * <p>Optional name for the change.</p>
     */
    inline ChangeSummary& WithChangeName(Aws::String&& value) { SetChangeName(std::move(value)); return *this;}

    /**
     * <p>Optional name for the change.</p>
     */
    inline ChangeSummary& WithChangeName(const char* value) { SetChangeName(value); return *this;}

  private:

    Aws::String m_changeType;
    bool m_changeTypeHasBeenSet = false;

    Entity m_entity;
    bool m_entityHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errorDetailList;
    bool m_errorDetailListHasBeenSet = false;

    Aws::String m_changeName;
    bool m_changeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
