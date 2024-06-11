﻿/**
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
    AWS_QBUSINESS_API Retriever();
    AWS_QBUSINESS_API Retriever(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Retriever& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application using the retriever.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline Retriever& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline Retriever& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline Retriever& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the retriever used by your Amazon Q Business
     * application.</p>
     */
    inline const Aws::String& GetRetrieverId() const{ return m_retrieverId; }
    inline bool RetrieverIdHasBeenSet() const { return m_retrieverIdHasBeenSet; }
    inline void SetRetrieverId(const Aws::String& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = value; }
    inline void SetRetrieverId(Aws::String&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::move(value); }
    inline void SetRetrieverId(const char* value) { m_retrieverIdHasBeenSet = true; m_retrieverId.assign(value); }
    inline Retriever& WithRetrieverId(const Aws::String& value) { SetRetrieverId(value); return *this;}
    inline Retriever& WithRetrieverId(Aws::String&& value) { SetRetrieverId(std::move(value)); return *this;}
    inline Retriever& WithRetrieverId(const char* value) { SetRetrieverId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of your retriever.</p>
     */
    inline const RetrieverType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RetrieverType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RetrieverType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Retriever& WithType(const RetrieverType& value) { SetType(value); return *this;}
    inline Retriever& WithType(RetrieverType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your retriever.</p>
     */
    inline const RetrieverStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RetrieverStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RetrieverStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Retriever& WithStatus(const RetrieverStatus& value) { SetStatus(value); return *this;}
    inline Retriever& WithStatus(RetrieverStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your retriever.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Retriever& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Retriever& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Retriever& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;

    RetrieverType m_type;
    bool m_typeHasBeenSet = false;

    RetrieverStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
