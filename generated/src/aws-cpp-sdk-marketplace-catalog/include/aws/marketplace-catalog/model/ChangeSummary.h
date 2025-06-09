/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/Entity.h>
#include <aws/core/utils/Document.h>
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
    AWS_MARKETPLACECATALOG_API ChangeSummary() = default;
    AWS_MARKETPLACECATALOG_API ChangeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ChangeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the change.</p>
     */
    inline const Aws::String& GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    template<typename ChangeTypeT = Aws::String>
    void SetChangeType(ChangeTypeT&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::forward<ChangeTypeT>(value); }
    template<typename ChangeTypeT = Aws::String>
    ChangeSummary& WithChangeType(ChangeTypeT&& value) { SetChangeType(std::forward<ChangeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to be changed.</p>
     */
    inline const Entity& GetEntity() const { return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    template<typename EntityT = Entity>
    void SetEntity(EntityT&& value) { m_entityHasBeenSet = true; m_entity = std::forward<EntityT>(value); }
    template<typename EntityT = Entity>
    ChangeSummary& WithEntity(EntityT&& value) { SetEntity(std::forward<EntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    ChangeSummary& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON value of the details specific to the change type of the requested
     * change.</p> <p>To download the "DetailsDocument" shapes, see the <a
     * href="https://github.com/awslabs/aws-marketplace-catalog-api-shapes-for-python">Python</a>
     * and <a
     * href="https://github.com/awslabs/aws-marketplace-catalog-api-shapes-for-java/tree/main">Java</a>
     * shapes on GitHub.</p>
     */
    inline Aws::Utils::DocumentView GetDetailsDocument() const { return m_detailsDocument; }
    inline bool DetailsDocumentHasBeenSet() const { return m_detailsDocumentHasBeenSet; }
    template<typename DetailsDocumentT = Aws::Utils::Document>
    void SetDetailsDocument(DetailsDocumentT&& value) { m_detailsDocumentHasBeenSet = true; m_detailsDocument = std::forward<DetailsDocumentT>(value); }
    template<typename DetailsDocumentT = Aws::Utils::Document>
    ChangeSummary& WithDetailsDocument(DetailsDocumentT&& value) { SetDetailsDocument(std::forward<DetailsDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ErrorDetail</code> objects associated with the change.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetailList() const { return m_errorDetailList; }
    inline bool ErrorDetailListHasBeenSet() const { return m_errorDetailListHasBeenSet; }
    template<typename ErrorDetailListT = Aws::Vector<ErrorDetail>>
    void SetErrorDetailList(ErrorDetailListT&& value) { m_errorDetailListHasBeenSet = true; m_errorDetailList = std::forward<ErrorDetailListT>(value); }
    template<typename ErrorDetailListT = Aws::Vector<ErrorDetail>>
    ChangeSummary& WithErrorDetailList(ErrorDetailListT&& value) { SetErrorDetailList(std::forward<ErrorDetailListT>(value)); return *this;}
    template<typename ErrorDetailListT = ErrorDetail>
    ChangeSummary& AddErrorDetailList(ErrorDetailListT&& value) { m_errorDetailListHasBeenSet = true; m_errorDetailList.emplace_back(std::forward<ErrorDetailListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional name for the change.</p>
     */
    inline const Aws::String& GetChangeName() const { return m_changeName; }
    inline bool ChangeNameHasBeenSet() const { return m_changeNameHasBeenSet; }
    template<typename ChangeNameT = Aws::String>
    void SetChangeName(ChangeNameT&& value) { m_changeNameHasBeenSet = true; m_changeName = std::forward<ChangeNameT>(value); }
    template<typename ChangeNameT = Aws::String>
    ChangeSummary& WithChangeName(ChangeNameT&& value) { SetChangeName(std::forward<ChangeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeType;
    bool m_changeTypeHasBeenSet = false;

    Entity m_entity;
    bool m_entityHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Utils::Document m_detailsDocument;
    bool m_detailsDocumentHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errorDetailList;
    bool m_errorDetailListHasBeenSet = false;

    Aws::String m_changeName;
    bool m_changeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
