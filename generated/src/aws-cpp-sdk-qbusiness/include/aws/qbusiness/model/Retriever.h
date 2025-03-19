/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/RetrieverType.h>
#include <aws/qbusiness/model/RetrieverStatus.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Summary information for the retriever used for your Amazon Q Business
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Retriever">AWS
   * API Reference</a></p>
   */
  class Retriever
  {
  public:
    AWS_QBUSINESS_API Retriever() = default;
    AWS_QBUSINESS_API Retriever(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Retriever& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application using the retriever.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    Retriever& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the retriever used by your Amazon Q Business
     * application.</p>
     */
    inline const Aws::String& GetRetrieverId() const { return m_retrieverId; }
    inline bool RetrieverIdHasBeenSet() const { return m_retrieverIdHasBeenSet; }
    template<typename RetrieverIdT = Aws::String>
    void SetRetrieverId(RetrieverIdT&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::forward<RetrieverIdT>(value); }
    template<typename RetrieverIdT = Aws::String>
    Retriever& WithRetrieverId(RetrieverIdT&& value) { SetRetrieverId(std::forward<RetrieverIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of your retriever.</p>
     */
    inline RetrieverType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RetrieverType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Retriever& WithType(RetrieverType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your retriever.</p>
     */
    inline RetrieverStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RetrieverStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Retriever& WithStatus(RetrieverStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your retriever.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Retriever& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;

    RetrieverType m_type{RetrieverType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RetrieverStatus m_status{RetrieverStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
