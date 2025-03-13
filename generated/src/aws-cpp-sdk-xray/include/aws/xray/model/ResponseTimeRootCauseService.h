/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ResponseTimeRootCauseEntity.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A collection of fields identifying the service in a response time
   * warning.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ResponseTimeRootCauseService">AWS
   * API Reference</a></p>
   */
  class ResponseTimeRootCauseService
  {
  public:
    AWS_XRAY_API ResponseTimeRootCauseService() = default;
    AWS_XRAY_API ResponseTimeRootCauseService(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ResponseTimeRootCauseService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResponseTimeRootCauseService& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of associated service names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    ResponseTimeRootCauseService& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    ResponseTimeRootCauseService& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type associated to the service.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ResponseTimeRootCauseService& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID associated to the service.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ResponseTimeRootCauseService& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline const Aws::Vector<ResponseTimeRootCauseEntity>& GetEntityPath() const { return m_entityPath; }
    inline bool EntityPathHasBeenSet() const { return m_entityPathHasBeenSet; }
    template<typename EntityPathT = Aws::Vector<ResponseTimeRootCauseEntity>>
    void SetEntityPath(EntityPathT&& value) { m_entityPathHasBeenSet = true; m_entityPath = std::forward<EntityPathT>(value); }
    template<typename EntityPathT = Aws::Vector<ResponseTimeRootCauseEntity>>
    ResponseTimeRootCauseService& WithEntityPath(EntityPathT&& value) { SetEntityPath(std::forward<EntityPathT>(value)); return *this;}
    template<typename EntityPathT = ResponseTimeRootCauseEntity>
    ResponseTimeRootCauseService& AddEntityPath(EntityPathT&& value) { m_entityPathHasBeenSet = true; m_entityPath.emplace_back(std::forward<EntityPathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating if the service is inferred from the trace.</p>
     */
    inline bool GetInferred() const { return m_inferred; }
    inline bool InferredHasBeenSet() const { return m_inferredHasBeenSet; }
    inline void SetInferred(bool value) { m_inferredHasBeenSet = true; m_inferred = value; }
    inline ResponseTimeRootCauseService& WithInferred(bool value) { SetInferred(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<ResponseTimeRootCauseEntity> m_entityPath;
    bool m_entityPathHasBeenSet = false;

    bool m_inferred{false};
    bool m_inferredHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
